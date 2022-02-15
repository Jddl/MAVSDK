// WARNING: THIS FILE IS AUTOGENERATED! As such, it should not be edited.
// Edits need to be made to the proto files
// (see
// https://github.com/mavlink/MAVSDK-Proto/blob/master/protos/component_information_server/component_information_server.proto)

#include <iomanip>

#include "component_information_server_impl.h"
#include "plugins/component_information_server/component_information_server.h"

namespace mavsdk {

using FloatParam = ComponentInformationServer::FloatParam;
using FloatParamUpdate = ComponentInformationServer::FloatParamUpdate;

ComponentInformationServer::ComponentInformationServer(System& system) :
    PluginBase(),
    _impl{std::make_unique<ComponentInformationServerImpl>(system)}
{}

ComponentInformationServer::ComponentInformationServer(std::shared_ptr<System> system) :
    PluginBase(),
    _impl{std::make_unique<ComponentInformationServerImpl>(system)}
{}

ComponentInformationServer::~ComponentInformationServer() {}

ComponentInformationServer::Result
ComponentInformationServer::provide_float_param(FloatParam param) const
{
    return _impl->provide_float_param(param);
}

void ComponentInformationServer::subscribe_float_param(FloatParamCallback callback)
{
    _impl->subscribe_float_param(callback);
}

bool operator==(
    const ComponentInformationServer::FloatParam& lhs,
    const ComponentInformationServer::FloatParam& rhs)
{
    return (rhs.name == lhs.name) && (rhs.short_description == lhs.short_description) &&
           (rhs.long_description == lhs.long_description) && (rhs.unit == lhs.unit) &&
           (rhs.decimal_places == lhs.decimal_places) &&
           ((std::isnan(rhs.start_value) && std::isnan(lhs.start_value)) ||
            rhs.start_value == lhs.start_value) &&
           ((std::isnan(rhs.default_value) && std::isnan(lhs.default_value)) ||
            rhs.default_value == lhs.default_value) &&
           ((std::isnan(rhs.min_value) && std::isnan(lhs.min_value)) ||
            rhs.min_value == lhs.min_value) &&
           ((std::isnan(rhs.max_value) && std::isnan(lhs.max_value)) ||
            rhs.max_value == lhs.max_value);
}

std::ostream&
operator<<(std::ostream& str, ComponentInformationServer::FloatParam const& float_param)
{
    str << std::setprecision(15);
    str << "float_param:" << '\n' << "{\n";
    str << "    name: " << float_param.name << '\n';
    str << "    short_description: " << float_param.short_description << '\n';
    str << "    long_description: " << float_param.long_description << '\n';
    str << "    unit: " << float_param.unit << '\n';
    str << "    decimal_places: " << float_param.decimal_places << '\n';
    str << "    start_value: " << float_param.start_value << '\n';
    str << "    default_value: " << float_param.default_value << '\n';
    str << "    min_value: " << float_param.min_value << '\n';
    str << "    max_value: " << float_param.max_value << '\n';
    str << '}';
    return str;
}

bool operator==(
    const ComponentInformationServer::FloatParamUpdate& lhs,
    const ComponentInformationServer::FloatParamUpdate& rhs)
{
    return (rhs.name == lhs.name) &&
           ((std::isnan(rhs.value) && std::isnan(lhs.value)) || rhs.value == lhs.value);
}

std::ostream& operator<<(
    std::ostream& str, ComponentInformationServer::FloatParamUpdate const& float_param_update)
{
    str << std::setprecision(15);
    str << "float_param_update:" << '\n' << "{\n";
    str << "    name: " << float_param_update.name << '\n';
    str << "    value: " << float_param_update.value << '\n';
    str << '}';
    return str;
}

std::ostream& operator<<(std::ostream& str, ComponentInformationServer::Result const& result)
{
    switch (result) {
        case ComponentInformationServer::Result::Unknown:
            return str << "Unknown";
        case ComponentInformationServer::Result::Success:
            return str << "Success";
        case ComponentInformationServer::Result::DuplicateParam:
            return str << "Duplicate Param";
        case ComponentInformationServer::Result::InvalidParamStartValue:
            return str << "Invalid Param Start Value";
        case ComponentInformationServer::Result::InvalidParamDefaultValue:
            return str << "Invalid Param Default Value";
        case ComponentInformationServer::Result::InvalidParamName:
            return str << "Invalid Param Name";
        default:
            return str << "Unknown";
    }
}

} // namespace mavsdk
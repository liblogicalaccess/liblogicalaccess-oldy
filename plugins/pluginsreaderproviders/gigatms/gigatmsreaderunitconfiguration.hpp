/**
 * \file gigatmsreaderunitconfiguration.hpp
 * \author Maxime C. <maxime-dev@islog.com>
 * \brief GIGA-TMS Reader unit configuration.
 */

#ifndef LOGICALACCESS_GIGATMSREADERUNITCONFIGURATION_HPP
#define LOGICALACCESS_GIGATMSREADERUNITCONFIGURATION_HPP

#include <logicalaccess/readerproviders/readerunitconfiguration.hpp>
#include <logicalaccess/plugins/readers/gigatms/lla_readers_gigatms_api.hpp>

namespace logicalaccess
{
/**
 * \brief The GIGA-TMS reader unit configuration base class.
 */
class LLA_READERS_GIGATMS_API GigaTMSReaderUnitConfiguration
    : public ReaderUnitConfiguration
{
  public:
    /**
     * \brief Constructor.
     */
    GigaTMSReaderUnitConfiguration();

    /**
     * \brief Destructor.
     */
    virtual ~GigaTMSReaderUnitConfiguration();

    /**
     * \brief Reset the configuration to default values
     */
    void resetConfiguration() override;

    /**
     * \brief Serialize the current object to XML.
     * \param parentNode The parent node.
     */
    void serialize(boost::property_tree::ptree &parentNode) override;

    /**
     * \brief UnSerialize a XML node to the current object.
     * \param node The XML node.
     */
    void unSerialize(boost::property_tree::ptree &node) override;

    /**
     * \brief Get the default Xml Node name for this object.
     * \return The Xml node name.
     */
    std::string getDefaultXmlNodeName() const override;
};
}

#endif
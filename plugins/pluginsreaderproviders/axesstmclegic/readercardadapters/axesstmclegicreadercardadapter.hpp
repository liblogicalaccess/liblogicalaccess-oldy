/**
 * \file axesstmclegicreadercardadapter.hpp
 * \author Maxime C. <maxime-dev@islog.com>
 * \brief Default AxessTMCLegic reader/card adapter.
 */

#ifndef LOGICALACCESS_DEFAULTAXESSTMCLEGICREADERCARDADAPTER_HPP
#define LOGICALACCESS_DEFAULTAXESSTMCLEGICREADERCARDADAPTER_HPP

#include <logicalaccess/cards/readercardadapter.hpp>
#include <logicalaccess/plugins/readers/axesstmclegic/lla_readers_axesstmclegic_api.hpp>
#include <string>
#include <vector>

namespace logicalaccess
{
/**
 * \brief A default AxessTMCLegic reader/card adapter class.
 */
class LLA_READERS_AXESSTMCLEGIC_API AxessTMCLegicReaderCardAdapter
    : public ReaderCardAdapter
{
  public:
    /**
     * \brief Constructor.
     */
    AxessTMCLegicReaderCardAdapter();

    /**
     * \brief Destructor.
     */
    virtual ~AxessTMCLegicReaderCardAdapter();

    /**
     * \brief Adapt the command to send to the reader.
     * \param command The command to send.
     * \return The adapted command to send.
     */
    ByteVector adaptCommand(const ByteVector &command) override;

    /**
     * \brief Adapt the asnwer received from the reader.
     * \param answer The answer received.
     * \return The adapted answer received.
     */
    ByteVector adaptAnswer(const ByteVector &answer) override;
};
}

#endif /* LOGICALACCESS_DEFAULTAXESSTMCLEGICREADERCARDADAPTER_HPP */
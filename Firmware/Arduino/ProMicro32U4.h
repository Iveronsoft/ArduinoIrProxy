#pragma once
#include "../AActuator.h"


namespace Firmware
{
	namespace Arduino
	{
		class ProMicro32U4 : AActuator
		{
		public:
			ProMicro32U4();
			virtual ~ProMicro32U4();

			bool doPlay() override;
			bool doPause() override;
			bool doStop() override;
			bool doNext() override;
			bool doPrevious() override;
			bool doForward() override;
			bool doRewind() override;
		};
	}
}
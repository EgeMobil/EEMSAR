/*


*/

#include <stdio.h>
#include <stdint.h>

#include "Std_Types.h"

#ifndef __DIO_H__

/* */
typedef uint8_t Dio_ChannelType;
/* */
typedef uint8_t Dio_PortType;
/* */
typedef uint32_t Dio_ChannelGroupType;
/* */
typedef uint8 Dio_LevelType ;
/* */
typedef uint8_t Dio_PortLevelType ;


/* */
void Dio_WriteChannel ( Dio_ChannelType ChannelId, Dio_LevelType Level );



#endif /* __DIO_H__ */
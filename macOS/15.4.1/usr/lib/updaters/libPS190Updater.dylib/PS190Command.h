@class NSData, NSString;

@interface PS190Command : NSObject

@property (readonly) unsigned char type;
@property (readonly) unsigned char param0;
@property (readonly) unsigned char param1;
@property (readonly) unsigned char param2;
@property (readonly) unsigned char count;
@property (readonly) NSData *data;
@property (readonly) NSString *rawDescription;
@property (readonly) unsigned int responseSize;
@property (readonly) NSData *commandPacket;
@property (readonly) NSData *snifferPacket;
@property (readonly) BOOL causesReset;

- (id)description;
- (void).cxx_destruct;
- (void)createCommandPacket;
- (id)initWithType:(unsigned char)a0 param0:(unsigned char)a1 param1:(unsigned char)a2 param2:(unsigned char)a3 count:(unsigned char)a4 data:(id)a5;

@end

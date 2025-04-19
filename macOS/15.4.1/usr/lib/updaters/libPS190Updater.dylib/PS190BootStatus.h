@interface PS190BootStatus : NSObject

@property (readonly) unsigned char status;

- (id)description;
- (id)initWithStatus:(unsigned char)a0;

@end

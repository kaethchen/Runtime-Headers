@class NSString, _BlastDoorLPPlatformColor;

@interface _BlastDoorLPImageProperties : NSObject <NSCopying>

@property (copy, nonatomic) NSString *accessibilityText;
@property (nonatomic) long long type;
@property (retain, nonatomic) _BlastDoorLPPlatformColor *overlaidTextColor;
@property (retain, nonatomic) _BlastDoorLPPlatformColor *dominantColor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

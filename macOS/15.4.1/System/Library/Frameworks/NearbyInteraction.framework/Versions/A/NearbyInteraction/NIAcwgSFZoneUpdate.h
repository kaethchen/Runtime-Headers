@interface NIAcwgSFZoneUpdate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long currentZone;
@property (readonly, nonatomic) unsigned short btConnHandle;
@property (readonly, nonatomic) char lastBtRssiValue;
@property (readonly, nonatomic) BOOL ioStateDisplacing;
@property (readonly, nonatomic) BOOL explicitPAITriggered;
@property (readonly, nonatomic) BOOL currentSFInBubble;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSFZone:(long long)a0 btConnHandle:(unsigned short)a1 lastBtRssiValue:(char)a2 ioStateDisplacing:(BOOL)a3 explicitPAITriggered:(BOOL)a4 currentSFInBubble:(BOOL)a5;

@end

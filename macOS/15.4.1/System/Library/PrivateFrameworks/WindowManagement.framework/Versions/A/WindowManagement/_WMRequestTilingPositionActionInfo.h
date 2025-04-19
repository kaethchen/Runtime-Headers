@class NSString;

@interface _WMRequestTilingPositionActionInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *windowID;
@property (readonly, nonatomic) unsigned long long tilingPosition;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWindowID:(id)a0 tilingPosition:(unsigned long long)a1;

@end

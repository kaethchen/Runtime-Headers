@class NSString, _WMWindowTilingState;

@interface _WMRestoreTilingStateActionInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *requestID;
@property (readonly, copy, nonatomic) NSString *windowID;
@property (readonly, copy, nonatomic) _WMWindowTilingState *tilingState;
@property (readonly, nonatomic) BOOL useVisibilityBasedFencing;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestID:(id)a0 windowID:(id)a1 tilingState:(id)a2 useVisibilityBasedFencing:(BOOL)a3;
- (id)initWithWindowID:(id)a0 tilingState:(id)a1 useVisibilityBasedFencing:(BOOL)a2;

@end

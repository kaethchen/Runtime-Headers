@class NSString, _WMSpringAnimationSettings, _WMResizeTargetGeometry;

@interface _WMClientResizeWindowRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *requestID;
@property (readonly, copy, nonatomic) NSString *windowID;
@property (readonly, copy, nonatomic) _WMResizeTargetGeometry *targetGeometry;
@property (readonly, copy, nonatomic) _WMSpringAnimationSettings *springSettings;
@property (readonly, nonatomic) BOOL requiresResponse;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestID:(id)a0 windowID:(id)a1 targetGeometry:(id)a2 springSettings:(id)a3 requiresResponse:(BOOL)a4;

@end

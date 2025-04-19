@class NSSet, NSDictionary, NSData;

@interface WRWidgetRendererInitializationPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *extensions;
@property (readonly, nonatomic) NSDictionary *configurations;
@property (readonly, nonatomic) NSData *systemEnvironment;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExtensions:(id)a0 configurations:(id)a1 systemEnvironment:(id)a2;

@end

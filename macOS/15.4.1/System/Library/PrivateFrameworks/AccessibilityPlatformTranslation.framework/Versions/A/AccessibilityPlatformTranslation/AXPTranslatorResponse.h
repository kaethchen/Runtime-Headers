@class AXPTranslationObject, NSArray, NSString;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface AXPTranslatorResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<NSObject, NSCopying, NSSecureCoding> resultData;
@property (nonatomic) unsigned long long attribute;
@property (nonatomic) unsigned long long notification;
@property (nonatomic) unsigned long long associatedRequestType;
@property (retain, nonatomic) AXPTranslationObject *associatedNotificationObject;
@property (retain, nonatomic) AXPTranslationObject *associatedTranslationObject;
@property (nonatomic) unsigned long long error;
@property (readonly, nonatomic) AXPTranslationObject *translationResponse;
@property (readonly, nonatomic) BOOL boolResponse;
@property (readonly, nonatomic) NSArray *translationsResponse;
@property (readonly, nonatomic) NSString *treeDumpType;
@property (readonly, nonatomic) NSArray *treeDumpResponse;

+ (id)emptyResponse;
+ (id)allowedDecodableClasses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

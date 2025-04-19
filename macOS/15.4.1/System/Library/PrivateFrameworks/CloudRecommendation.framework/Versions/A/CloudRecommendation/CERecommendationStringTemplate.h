@class NSDictionary;

@interface CERecommendationStringTemplate : NSObject <NSSecureCoding, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *titleTemplates;
@property (retain, nonatomic) NSDictionary *subTitleTemplates;
@property (retain, nonatomic) NSDictionary *messageTemplates;
@property (retain, nonatomic) NSDictionary *actionTitleTemplates;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)actionTitleTemplateForKey:(id)a0;
- (id)messageTemplateForKey:(id)a0;
- (id)subTitleTemplateForKey:(id)a0;
- (id)titleTemplateForKey:(id)a0;

@end

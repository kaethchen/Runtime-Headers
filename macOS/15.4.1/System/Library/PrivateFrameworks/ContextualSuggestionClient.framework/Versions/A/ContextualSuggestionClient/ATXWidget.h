@class NSString, NSDictionary, CHSWidget;

@interface ATXWidget : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *source;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) CHSWidget *chsWidget;
@property (readonly, nonatomic, getter=isSuggestedWidget) BOOL suggestedWidget;
@property (copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithSource:(id)a0;
- (id)initWithIdentifier:(id)a0 chsWidget:(id)a1 suggestedWidget:(BOOL)a2;
- (id)initWithIdentifier:(id)a0 chsWidget:(id)a1 suggestedWidget:(BOOL)a2 source:(id)a3;
- (BOOL)isEqualToATXWidget:(id)a0;

@end

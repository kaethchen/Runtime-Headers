@class NSString, NSArray, NSDictionary;

@interface ATXWidgetStack : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *widgets;
@property (readonly, nonatomic) long long family;
@property (readonly, nonatomic) BOOL allowsNewWidget;
@property (readonly, nonatomic) BOOL allowsSmartRotate;
@property (copy, nonatomic) NSString *topWidgetIdentifier;
@property (copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 widgets:(id)a1 family:(long long)a2 allowsNewWidget:(BOOL)a3 allowsSmartRotate:(BOOL)a4;
- (id)initWithIdentifier:(id)a0 widgets:(id)a1 topWidgetIdentifier:(id)a2 family:(long long)a3 allowsNewWidget:(BOOL)a4 allowsSmartRotate:(BOOL)a5;
- (BOOL)isEqualToATXWidgetStack:(id)a0;

@end

@class NSString, NSArray;

@interface SWCollaborationOption : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (copy, nonatomic) NSArray *requiredOptionsIdentifiers;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)optionWithTitle:(id)a0 identifier:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 identifier:(id)a1;
- (id)initWithTitle:(id)a0 identifier:(id)a1 subtitle:(id)a2 selected:(BOOL)a3 requiredOptionsIdentifiers:(id)a4;
- (BOOL)isEqualToCollaborationOption:(id)a0;

@end

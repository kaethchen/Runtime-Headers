@class NSString;

@interface ATXTimeEventAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *compactTitle;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) NSString *colorName;
@property (readonly, nonatomic) unsigned long long options;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)compactTitleUsingETAIfPossibleWithMinutes:(double)a0 style:(long long)a1;
- (id)initWithTitle:(id)a0 compactTitle:(id)a1 identifier:(id)a2 symbolName:(id)a3 colorName:(id)a4 options:(unsigned long long)a5;

@end

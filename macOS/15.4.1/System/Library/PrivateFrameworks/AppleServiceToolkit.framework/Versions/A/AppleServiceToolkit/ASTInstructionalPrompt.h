@class NSNumber, NSString, NSArray;

@interface ASTInstructionalPrompt : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *identifier;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *iconLocator;
@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSString *localizedSubtitle;
@property (retain, nonatomic) NSArray *imageLocators;
@property (retain, nonatomic) NSArray *instructions;
@property (nonatomic) long long instructionsStyle;
@property (retain, nonatomic) NSArray *options;
@property (retain, nonatomic) NSArray *navigationBarActions;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithID:(id)a0 type:(long long)a1 iconLocator:(id)a2 localizedTitle:(id)a3 localizedSubtitle:(id)a4 imageLocators:(id)a5 instructions:(id)a6 instructionsStyle:(long long)a7 options:(id)a8;
- (id)initWithID:(id)a0 type:(long long)a1 iconLocator:(id)a2 localizedTitle:(id)a3 localizedSubtitle:(id)a4 imageLocators:(id)a5 instructions:(id)a6 options:(id)a7;
- (id)initWithID:(id)a0 type:(long long)a1 imageLocators:(id)a2 instructions:(id)a3 options:(id)a4;

@end

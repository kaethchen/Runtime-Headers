@class NSString, NSArray;

@interface ICSearchUserInput : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *searchString;
@property (readonly, nonatomic) NSArray *tokens;
@property (readonly, copy, nonatomic) NSString *keyboardLanguage;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, copy, nonatomic) NSString *displayString;

+ (id)emptyInput;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_configureEmptyInput;
- (id)initWithSearchString:(id)a0 tokens:(id)a1 keyboardLanguage:(id)a2;

@end

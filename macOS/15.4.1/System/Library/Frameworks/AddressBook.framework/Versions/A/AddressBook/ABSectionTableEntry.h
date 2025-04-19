@class NSString;

@interface ABSectionTableEntry : ABTableEntry

@property (copy, nonatomic) NSString *header;
@property (nonatomic) long long theme;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *sortingFirstName;
@property (readonly, nonatomic) NSString *sortingLastName;
@property (readonly, copy, nonatomic) NSString *accessibilityDescription;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;

@end

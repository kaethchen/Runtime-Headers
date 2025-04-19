@class NSString, NSArray;

@interface PKPrecursorPassUpgradeRequestDescription : NSObject

@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSString *localizedDescription;
@property (retain, nonatomic) NSArray *actions;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (BOOL)isEqualToDescription:(id)a0;

@end

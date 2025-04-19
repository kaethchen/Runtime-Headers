@class NSString, NSMutableArray, NSArray;

@interface IMKLayoutLine : NSObject

@property (retain, nonatomic) NSMutableArray *layoutUnitsInternal;
@property (copy, nonatomic) NSString *groupName;
@property (readonly, nonatomic) NSArray *layoutUnits;

- (void)dealloc;
- (void)addLayoutUnit:(id)a0;

@end

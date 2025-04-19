@class NSDictionary;

@interface MFMessageSortingInformation : NSObject

@property (nonatomic) BOOL skipAutomaticSecondarySort;
@property (retain, nonatomic) NSDictionary *sortValues;

- (void)dealloc;

@end

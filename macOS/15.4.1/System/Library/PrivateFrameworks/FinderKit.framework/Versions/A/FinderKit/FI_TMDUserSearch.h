@class NSString, NSArray, NSNumber;

@interface FI_TMDUserSearch : NSObject

@property (retain, nonatomic) NSString *filter;
@property (retain, nonatomic) NSArray *scope;
@property (retain, nonatomic) NSArray *slices;
@property (retain, nonatomic) NSNumber *searchSystemFiles;
@property (retain, nonatomic) NSNumber *fileNameOnly;
@property (retain, nonatomic) NSNumber *searchNonFinderFiles;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

@class NSArray, NSMutableArray, NSString;

@interface IMKUICandidateLineLayoutEntry : NSObject

@property (retain, nonatomic) NSMutableArray *candidateItemsInternal;
@property (nonatomic, getter=isComplete) BOOL complete;
@property (nonatomic) long long alignment;
@property (readonly, nonatomic) NSArray *candidateItems;
@property (nonatomic) unsigned long long index;
@property (nonatomic) double length;
@property (nonatomic) double maxLength;
@property (readonly) BOOL overflows;
@property (readonly, nonatomic) double remainingLength;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (void)addCandidateItem:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1;

@end

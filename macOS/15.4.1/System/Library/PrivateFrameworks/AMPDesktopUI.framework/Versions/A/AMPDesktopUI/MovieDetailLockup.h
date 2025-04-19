@protocol MovieDetailLockupModel;

@interface MovieDetailLockup : NSTableCellView

@property (retain, nonatomic) id<MovieDetailLockupModel> viewModel;

+ (id)lockup;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isFlipped;

@end

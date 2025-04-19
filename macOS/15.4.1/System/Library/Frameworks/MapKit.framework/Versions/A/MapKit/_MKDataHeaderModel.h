@class NSView, _MKLineHeaderModel, MKTransitInfoLabelView;

@interface _MKDataHeaderModel : NSObject

@property (weak, nonatomic) NSView *ownerView;
@property (retain, nonatomic) _MKLineHeaderModel *firstLine;
@property (retain, nonatomic) _MKLineHeaderModel *secondLine;
@property (retain, nonatomic) _MKLineHeaderModel *thirdLine;
@property (retain, nonatomic) _MKLineHeaderModel *forthLine;
@property (retain, nonatomic) MKTransitInfoLabelView *transitLabel;
@property (retain, nonatomic) _MKLineHeaderModel *secondaryNameLine;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end

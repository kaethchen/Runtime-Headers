@class NSString, NSEvent;

@interface NSCorrectionPanelSelection : NSObject

@property (readonly, nonatomic) NSString *selectedString;
@property (readonly, nonatomic) long long dismissType;
@property (readonly, nonatomic) NSEvent *dismissEvent;

- (void).cxx_destruct;
- (id)initWithSelectedString:(id)a0 dismissType:(long long)a1 dismissEvent:(id)a2;

@end

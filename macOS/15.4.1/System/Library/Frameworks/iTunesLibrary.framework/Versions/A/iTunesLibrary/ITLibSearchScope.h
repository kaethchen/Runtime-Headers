@class ITLibModelKind;

@interface ITLibSearchScope : NSObject

@property (retain, nonatomic) ITLibModelKind *libModelKind;

- (void).cxx_destruct;
- (id)initWithModelKind:(id)a0;

@end

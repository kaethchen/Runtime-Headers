@class NSMutableDictionary;

@interface CNAutocompletePresentationManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *directory;

- (id)init;
- (void).cxx_destruct;
- (id)debugDescriptionOfPresentationType:(long long)a0;
- (id)keyForResult:(id)a0;
- (id)presentationForResult:(id)a0;
- (long long)presentationTypeForResult:(id)a0;
- (void)setPresentationType:(long long)a0 forResult:(id)a1;

@end

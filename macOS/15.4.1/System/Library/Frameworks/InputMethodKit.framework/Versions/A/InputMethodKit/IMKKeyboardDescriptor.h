@protocol IMKCandidateMenu;

@interface IMKKeyboardDescriptor : NSObject

@property (readonly, nonatomic) id<IMKCandidateMenu> candidateMenu;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCandidateMenu:(id)a0;

@end

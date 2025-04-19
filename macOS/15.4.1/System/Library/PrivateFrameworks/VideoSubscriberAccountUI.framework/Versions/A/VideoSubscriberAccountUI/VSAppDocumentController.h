@class VSViewModel, NSArray, IKAppDocument, NSError;
@protocol VSAppDocumentControllerDelegate;

@interface VSAppDocumentController : NSObject

@property (readonly, nonatomic) IKAppDocument *appDocument;
@property (retain, nonatomic) NSArray *filteredButtonLockupElements;
@property (weak, nonatomic) id<VSAppDocumentControllerDelegate> delegate;
@property (readonly, nonatomic) VSViewModel *viewModel;
@property (readonly, nonatomic) NSError *viewModelError;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAppDocument:(id)a0;

@end

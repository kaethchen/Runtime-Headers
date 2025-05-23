@class BRContainer;

@interface BRUploadAllFilesOperation : BROperation {
    BRContainer *_container;
}

@property (copy) id /* block */ uploadAllFilesCompletion;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (id)initWithContainer:(id)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;

@end

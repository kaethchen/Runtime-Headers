@class NSString;

@interface BGContinuedProcessingTask : BGTask

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic, setter=_setProgressHandler:) id /* block */ _progressHandler;

- (id)description;
- (void).cxx_destruct;
- (void)updateProgress:(id)a0;
- (id)_initWithIdentifier:(id)a0 activity:(id)a1;

@end

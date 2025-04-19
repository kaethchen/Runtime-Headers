@class NSString, NSProgress;

@interface _BGContinuedProcessingTask : BGTask

@property (copy) NSString *title;
@property (copy) NSString *reason;
@property (retain, nonatomic) NSProgress *internalProgress;
@property (copy, nonatomic, setter=_setProgressHandler:) id /* block */ _progressHandler;
@property (copy, nonatomic, setter=_setDescriptionUpdateHandler:) id /* block */ _descriptionUpdateHandler;

- (id)description;
- (void).cxx_destruct;
- (void)updateProgress:(id)a0;
- (void)cancel;
- (id)_initWithIdentifier:(id)a0 activity:(id)a1;
- (void)updateProgressPercentage:(double)a0;
- (void)updateTitle:(id)a0 withReason:(id)a1;

@end

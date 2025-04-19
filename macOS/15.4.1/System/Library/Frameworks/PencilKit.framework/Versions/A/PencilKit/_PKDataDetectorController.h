@class NSArray, NSString, NSMutableSet;
@protocol _PKDataDetectorControllerDelegate;

@interface _PKDataDetectorController : NSObject <PKDataDetectorItemDelegate> {
    NSMutableSet *_currentDataDetectorItems;
    struct { unsigned char delegateSupportsItemsDidChange : 1; } _delegateFlags;
}

@property (weak, nonatomic) id<_PKDataDetectorControllerDelegate> delegate;
@property (readonly, nonatomic) NSArray *currentItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)_foundDataDetectorItems:(id)a0;
- (id)dataDetectorItemAllItems:(id)a0;

@end

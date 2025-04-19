@class NSString, NSMutableArray;
@protocol PXGAXResponder;

@interface PXGAXCoalescingResponder : NSObject <PXGAXResponder> {
    NSMutableArray *_pendingAXEventBlocks;
}

@property (nonatomic) BOOL pauseEventDelivery;
@property (weak, nonatomic) id<PXGAXResponder> axNextResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_distributeEvents;
- (void)_notifyResponder:(id /* block */)a0;
- (id)axContainingScrollViewForAXGroup:(id)a0;
- (void)axGroup:(id)a0 didChange:(unsigned long long)a1 userInfo:(id)a2;
- (BOOL)axGroup:(id)a0 didRequestToPerformAction:(long long)a1 userInfo:(id)a2;

@end

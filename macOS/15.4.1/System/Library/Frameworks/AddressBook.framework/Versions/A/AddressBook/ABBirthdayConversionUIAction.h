@class NSString, ABCollectionViewItem;

@interface ABBirthdayConversionUIAction : NSObject <ABCollectionMultiPropertyAction> {
    ABCollectionViewItem *_sourceItem;
}

@property (readonly) NSString *targetPropertyKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)titleForTarget:(id)a0;
- (void)addConvertedBirthdayComponents:(id)a0;
- (id)convertComponents:(id)a0;
- (void)executeWithTarget:(id)a0 delegate:(id)a1;
- (id)initWithCollectionViewItem:(id)a0 targetPropertyKey:(id)a1;
- (BOOL)validateWithTarget:(id)a0;

@end

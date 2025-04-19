@class NSObject;
@protocol OS_dispatch_queue;

@interface MTRAsyncWorkItem : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    long long _state;
}

@property (readonly, nonatomic) unsigned long long uniqueID;
@property (copy, nonatomic) id /* block */ readyHandler;
@property (copy, nonatomic) id /* block */ cancelHandler;
@property (readonly, nonatomic) unsigned long long batchingID;
@property (readonly, nonatomic) id batchableData;
@property (readonly, nonatomic) id /* block */ batchingHandler;
@property (readonly, nonatomic) unsigned long long duplicateTypeID;
@property (readonly, nonatomic) id /* block */ duplicateCheckHandler;

- (id)description;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)setBatchingID:(unsigned long long)a0 data:(id)a1 handler:(id /* block */)a2;
- (void)setDuplicateTypeID:(unsigned long long)a0 handler:(id /* block */)a1;

@end

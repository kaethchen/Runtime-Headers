@class NSString;
@protocol CNSchedulerProvider, CNScheduler;

@interface CNSchedulerProvider : NSObject <CNSchedulerProvider>

@property (class, readonly, nonatomic) id<CNSchedulerProvider> defaultProvider;

@property (readonly, copy, nonatomic) id /* block */ serialSchedulerProvider;
@property (readonly, copy, nonatomic) id /* block */ synchronousSerialSchedulerProvider;
@property (readonly, copy, nonatomic) id /* block */ readerWriterSchedulerProvider;
@property (readonly, nonatomic) id<CNScheduler> backgroundScheduler;
@property (readonly, nonatomic) id<CNScheduler> mainThreadScheduler;
@property (readonly, nonatomic) id<CNScheduler> inlineScheduler;
@property (readonly, nonatomic) id<CNScheduler> immediateScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeDefaultProvider;
+ (id)providerWithBackgroundConcurrencyLimit:(long long)a0;

- (void).cxx_destruct;
- (id)backgroundSchedulerWithQualityOfService:(unsigned long long)a0;
- (id)initWithBackgroundScheduler:(id)a0 mainThreadScheduler:(id)a1 immediateScheduler:(id)a2 serialSchedulerProvider:(id /* block */)a3 synchronousSerialSchedulerProvider:(id /* block */)a4 readerWriterSchedulerProvider:(id /* block */)a5;
- (id)initWithBackgroundScheduler:(id)a0 mainThreadScheduler:(id)a1 inlineScheduler:(id)a2 immediateScheduler:(id)a3 serialSchedulerProvider:(id /* block */)a4 synchronousSerialSchedulerProvider:(id /* block */)a5 readerWriterSchedulerProvider:(id /* block */)a6;
- (id)newReaderWriterSchedulerWithName:(id)a0;
- (id)newSerialSchedulerWithName:(id)a0;
- (id)newSynchronousSerialSchedulerWithName:(id)a0;

@end

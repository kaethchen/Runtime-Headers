@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface NUMLModelRegistry : NSObject

@property (retain, nonatomic) NSMutableDictionary *modelMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) unsigned long long signpost;

- (id)init;
- (void).cxx_destruct;
- (id)loadModelAtURL:(id)a0 options:(unsigned long long)a1 error:(out id *)a2;
- (id)modelForKey:(id)a0;
- (void)registerModel:(id)a0 forKey:(id)a1;
- (void)unregisterModelForKey:(id)a0;

@end

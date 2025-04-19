@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVDeleteTask : CoreDAVActionBackedTask

@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate;
@property (retain, nonatomic) NSString *previousETag;

- (id)description;
- (void).cxx_destruct;
- (id)requestBody;
- (id)httpMethod;
- (id)additionalHeaderValues;
- (void)finishCoreDAVTaskWithError:(id)a0;

@end

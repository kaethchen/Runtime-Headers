@class NSString;

@interface SKTaskRawParser : NSObject <SKTaskDataParser>

@property (copy) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)parseData:(id)a0;
- (id)initWithCallback:(id /* block */)a0;

@end

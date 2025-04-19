@class MessageListSectionDataSource, NSString;

@interface MessageListSectionUpdate : NSObject <EFPubliclyDescribable>

@property (retain, nonatomic) MessageListSectionDataSource *sectionDataSource;
@property (nonatomic) BOOL animated;
@property (nonatomic) BOOL cleanSnapshot;
@property (nonatomic) BOOL immediateCompletion;
@property (copy, nonatomic) id /* block */ prepareHandler;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMessageListSectionDataSource:(id)a0 animated:(BOOL)a1 cleanSnapshot:(BOOL)a2 prepareHandler:(id /* block */)a3 updateHandler:(id /* block */)a4 immediateCompletion:(BOOL)a5 completionHandler:(id /* block */)a6;
- (id)initWithMessageListSectionDataSource:(id)a0 animated:(BOOL)a1 cleanSnapshot:(BOOL)a2 updateHandler:(id /* block */)a3;

@end

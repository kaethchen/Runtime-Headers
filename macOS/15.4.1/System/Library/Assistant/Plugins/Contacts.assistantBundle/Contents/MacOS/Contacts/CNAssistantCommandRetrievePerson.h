@class CNContactStore, NSString;

@interface CNAssistantCommandRetrievePerson : SADomainObjectRetrieve <CNAssistantCommand> {
    CNContactStore *_contactStore;
}

@property (retain, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performWithCompletion:(id /* block */)a0;
- (id)retrieve;

@end

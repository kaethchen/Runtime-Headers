@class NSMutableData;

@interface CKDProtobufResponseBodyParser : CKDResponseBodyParser

@property (retain, nonatomic) NSMutableData *tailParserData;
@property (nonatomic) unsigned long long curObjectLength;
@property (nonatomic) BOOL isParsing;
@property (retain, nonatomic) Class messageClass;
@property (nonatomic) BOOL parsingStandaloneMessage;

- (void).cxx_destruct;
- (void)finishWithCompletion:(id /* block */)a0;
- (BOOL)_parseObjectFromData:(id)a0 rawData:(id)a1 group:(id)a2;
- (BOOL)_parseObjects:(BOOL)a0 group:(id)a1;
- (id)initWithQoS:(long long)a0 messageClass:(Class)a1 parsingStandaloneMessage:(BOOL)a2;
- (void)processData:(id)a0 completionHandler:(id /* block */)a1;

@end

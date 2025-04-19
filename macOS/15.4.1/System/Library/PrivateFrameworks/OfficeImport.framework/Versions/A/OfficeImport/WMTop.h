@interface WMTop : QLTop

- (void)initializeClasses;
- (Class)mapperClassForIndexing:(BOOL)a0;
- (Class)readerClassForBinaryDocuments;
- (Class)readerClassForXMLDocuments;
- (Class)stateClass;

@end

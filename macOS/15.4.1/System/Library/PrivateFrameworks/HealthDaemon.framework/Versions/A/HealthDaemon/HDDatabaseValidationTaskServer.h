@interface HDDatabaseValidationTaskServer : HDStandardTaskServer <HKDatabaseValidationTaskServerInterface>

+ (id)taskIdentifier;

- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)remote_validateDatabase:(long long)a0 clientCompletionHandler:(id /* block */)a1 errorHandlerIdentifier:(id)a2;
- (void)remote_validateEntitiesWithClientCompletionHandler:(id /* block */)a0 errorHandlerIdentifier:(id)a1;

@end

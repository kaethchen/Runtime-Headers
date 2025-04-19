@interface AMICalPluginWorkflowPersonality : AMApplicationWorkflowPersonality

- (id)imageRepresentation;
- (BOOL)finishSavingWorkflow:(id)a0 forOperation:(unsigned long long)a1 atURL:(id)a2 error:(id *)a3;
- (id)infoStringForCompleteInstallationWithMetaData:(id)a0;
- (id)personalitySettingsDictionary;

@end

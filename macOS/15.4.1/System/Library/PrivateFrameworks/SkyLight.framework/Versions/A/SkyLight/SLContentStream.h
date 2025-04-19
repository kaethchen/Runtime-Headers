@class NSString, NSDictionary, SLSharingSession, SLContentFilter, NSObject;
@protocol OS_dispatch_queue;

@interface SLContentStream : NSObject <SLSharingSessionManagerDelegate>

@property (nonatomic) BOOL running;
@property (retain, nonatomic) SLSharingSession *session;
@property (retain, nonatomic) SLContentFilter *filter;
@property (retain, nonatomic) NSDictionary *properties;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) struct CGDisplayStream { } *stream;
@property (readonly, copy, nonatomic) id /* block */ zeroWeakSelf;
@property (readonly, copy, nonatomic) id /* block */ bridgingHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)createScreenshot:(id)a0 properties:(id)a1 queue:(id)a2 handler:(id /* block */)a3 error:(id *)a4;

- (void)dealloc;
- (BOOL)start:(id *)a0;
- (BOOL)stop:(id *)a0;
- (struct CGDisplayStream { } *)createStreamWithFilter:(id)a0 error:(id *)a1;
- (struct CGDisplayStream { } *)createStreamWithSession:(id)a0 error:(id *)a1;
- (id)initWithFilter:(id)a0 properties:(id)a1 queue:(id)a2 handler:(id /* block */)a3;
- (id)initWithFilter:(id)a0 properties:(id)a1 queue:(id)a2 handler:(id /* block */)a3 error:(id *)a4;
- (void)populateDisplayStreamProperties:(id)a0 with:(id)a1;
- (BOOL)updateFilter:(id)a0 error:(id *)a1;
- (BOOL)updateProperties:(id)a0 error:(id *)a1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary;

@interface UIReachabilityManager : NSObject {
    NSMutableDictionary *_requests;
}

+ (id)sharedReachabilityManager;

- (void)addObserver:(id)arg1 forHostname:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1 forHostname:(id)arg2;

@end
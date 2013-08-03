diff --git a/src/applications/model/testapp.h b/src/applications/model/myTestapp.h
index d416270..d4a46eb 100644
--- a/src/applications/model/testapp.h
+++ b/src/applications/model/myTestapp.h
@@ -20,6 +20,8 @@ private:
  *
  * 
  */
+  virtual void StartApplication(void);
+  virtual void StopApplication(void);
 };
 
 }

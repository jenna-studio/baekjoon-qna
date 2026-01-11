from datetime import datetime, timezone, timedelta

KST = timezone(timedelta(hours=9))

now = datetime.now(KST)

print(now.strftime("%Y-%m-%d"))